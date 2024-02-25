void DrawBoxEnemy(ImDrawList *draw, ImVec2 X, ImVec2 Y, float thicc, int color) {
    draw->AddLine({X.x, X.y}, {Y.x, Y.y}, color, thicc);
}

class FPSCounter {
protected:
    unsigned int m_fps;
    unsigned int m_fpscount;
    long m_fpsinterval;

public:
    FPSCounter() : m_fps(0), m_fpscount(0), m_fpsinterval(0) {
    }
    void update() {
        m_fpscount++;

        if (m_fpsinterval < time(0)) {
            m_fps = m_fpscount;

            m_fpscount = 0;
            m_fpsinterval = time(0) + 1;
        }
    }
    unsigned int get() const {
        return m_fps;
    }
};
FPSCounter fps;
int32_t ToColor(float *col) {
    return ImGui::ColorConvertFloat4ToU32(*(ImVec4 *) (col));
}
void DrawESP(ImDrawList *draw) {
    auto Actors = getActors();

    int totalEnemies = 0, totalBots = 0;

    ASTExtraPlayerCharacter *localPlayer = 0;
    ASTExtraPlayerController *localController = 0;

    std::string sFPS = " FPS: ";
    sFPS += std::to_string(fps.get());
    draw->AddText({((float) density / 10.0f), 40},ToColor(Config.ColorsESP.Count) ,sFPS.c_str());

    for (int i = 0; i < Actors.size(); i++) {
        auto Actor = Actors[i];
        if (isObjectInvalid(Actor))
            continue;

        if (Actor->IsA(ASTExtraPlayerController::StaticClass())) {
            localController = (ASTExtraPlayerController *) Actor;
            break;
        }
    }
    if (localController) {
        for (int i = 0; i < Actors.size(); i++) {
            auto Actor = Actors[i];
            if (isObjectInvalid(Actor))
                continue;

            if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                if (((ASTExtraPlayerCharacter *) Actor)->PlayerKey == localController->PlayerKey) {
                    localPlayer = (ASTExtraPlayerCharacter *) Actor;
                    break;
                }
            }
        }
        if (localPlayer) {
            if (localPlayer->PartHitComponent) {
                auto ConfigCollisionDistSqAngles = localPlayer->PartHitComponent->ConfigCollisionDistSqAngles;
                for (int j = 0; j < ConfigCollisionDistSqAngles.Num(); j++) {
                    ConfigCollisionDistSqAngles[j].Angle = 50;
                }
                localPlayer->PartHitComponent->ConfigCollisionDistSqAngles = ConfigCollisionDistSqAngles;
            }

            for (int i = 0; i < Actors.size(); i++) {
                auto Actor = Actors[i];
                if (isObjectInvalid(Actor))
                    continue;
                auto Player = (ASTExtraPlayerCharacter *) Actor;
                if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                    long Playerline =  IM_COL32(255, 100, 0, 255);
                    long PlayerBox =  IM_COL32(255, 0, 0, 255);
                    long PlayerSkl =  IM_COL32(255, 0, 0, 255);
                    long Insidebox =  IM_COL32(255, 119, 0, 25);

                    long Playerlineai =  IM_COL32(0, 255, 20, 255);
                    long PlayerBoxai =  IM_COL32(0, 255, 20, 255);
                    long PlayerSklai =  IM_COL32(0, 255, 20, 255);
                    long Insideboxai =  IM_COL32(0, 2, 100, 50);
                    if (!localController->LineOfSightTo(Player, {0, 0, 0}, true)) {
                        Playerline = ToColor(Config.ColorsESP.LinePlayer);
                        PlayerBox = ToColor(Config.ColorsESP.Box);
                        PlayerSkl = ToColor(Config.ColorsESP.Skeleton);
                        Insidebox = IM_COL32(255, 119, 200, 25);

                        Playerlineai = ToColor(Config.ColorsESP.Linebot);
                        PlayerBoxai = ToColor(Config.ColorsESP.Boxbot);
                        PlayerSklai = ToColor(Config.ColorsESP.Skeletonbot);
                        Insideboxai = IM_COL32(255, 119, 255, 25);

                    }

                    float Distance = localPlayer->GetDistanceTo(Player) / 100.0f;
                    if (Distance > 500.0f)
                        continue;

                    if (Player->PlayerKey == localController->PlayerKey)
                        continue;

                    if (Player->TeamID == localController->TeamID)
                        continue;

                    if (Player->bDead)
                        continue;


                    if (Player->bIsAI)
                        totalBots++;
                    else
                        totalEnemies++;

                    if (Config.ESPMenu.NoBot)
                        if (Player->bIsAI)
                            continue;
                    float magic_number = (Distance);
                    float mx = (glWidth / 4) / magic_number;

                    float healthLength = glWidth / 17;
                    if (healthLength < mx)
                        healthLength = mx;

                    auto HeadPos = Player->GetBonePos("Head", {});
                    HeadPos.Z = HeadPos.Z + 1.0f; //head se line ooper
                    ImVec2 headPosSC;

                    auto RootPos = Player->GetBonePos("Root", {});
                    ImVec2 RootPosSC;
                    if (W2S(HeadPos, (FVector2D *) &headPosSC) && W2S(RootPos, (FVector2D *) &RootPosSC)) {

                        if (Config.ESPMenu.Line) {
                            if (Player->bIsAI) {
                                if (Config.ESPMenu.By == EEsp::Top) {
                                    draw->AddLine({(float) glWidth / 2, 0}, headPosSC,
                                                  Playerlineai, Config.Line);

                                }

                                if (Config.ESPMenu.By == EEsp::Mid) {
                                    draw->AddLine({(float) glWidth / 2, 358}, headPosSC,
                                                  Playerlineai, Config.Line);

                                }

                                if (Config.ESPMenu.By == EEsp::Buttom) {

                                    draw->AddLine({(float) glWidth / 2, 716}, headPosSC,
                                                  Playerlineai, Config.Line);
                                }
                            } else {
                                if (Config.ESPMenu.Tar == EEspp::Up) {
                                    draw->AddLine({(float) glWidth / 2, 0}, headPosSC, Playerline,Config.Line);

                                }
                                if (Config.ESPMenu.Tar == EEspp:: Middle) {

                                    draw->AddLine({(float) glWidth / 2, 358}, headPosSC, Playerline,Config.Line);

                                }
                                if (Config.ESPMenu.Tar == EEspp::Low) {

                                    draw->AddLine({(float) glWidth / 2, 716}, headPosSC, Playerline,Config.Line);

                                }
                            }
                        }
                        if (Config.ESPMenu.Box) {
                            float boxHeight = abs(headPosSC.y - RootPosSC.y);
                            float boxWidth = boxHeight * 0.65f;
                            ImVec2 vStart = {headPosSC.x - (boxWidth / 2), headPosSC.y};
                            ImVec2 vEnd = {vStart.x + boxWidth, vStart.y + boxHeight};
                            if (Player->bIsAI)
                            {
                                draw->AddRect(vStart, vEnd, PlayerBoxai, 1.5f, 240, Config.Line);
                                draw->AddRectFilled(vStart, vEnd, Insideboxai, 1.5f, 240);
                            } else{
                                draw->AddRect(vStart, vEnd, PlayerBox, 1.5f, 240, Config.Line);
                                draw->AddRectFilled(vStart, vEnd, Insidebox, 1.5f, 240);
                            }
                        }

                        if (Config.ESPMenu.Skeleton) {
                            static std::vector<std::string> right_arm{"neck_01",
                                                                      "clavicle_r",
                                                                      "upperarm_r",
                                                                      "lowerarm_r",
                                                                      "hand_r", "item_r"};
                            static std::vector<std::string> left_arm{"neck_01",
                                                                     "clavicle_l",
                                                                     "upperarm_l",
                                                                     "lowerarm_l",
                                                                     "hand_l", "item_l"};
                            static std::vector<std::string> spine{"Head", "neck_01",
                                                                  "spine_03",
                                                                  "spine_02", "spine_01",
                                                                  "pelvis"};
                            static std::vector<std::string> lower_right{"pelvis", "thigh_r",
                                                                        "calf_r", "foot_r"};
                            static std::vector<std::string> lower_left{"pelvis", "thigh_l",
                                                                       "calf_l", "foot_l"};
                            static std::vector<std::vector<std::string>> skeleton{right_arm,
                                                                                  left_arm,
                                                                                  spine,
                                                                                  lower_right,
                                                                                  lower_left};

                            if (Player->bIsAI)
                            {
                                for (auto &boneStructure: skeleton) {
                                    std::string lastBone;
                                    for (std::string &currentBone: boneStructure) {
                                        if (!lastBone.empty()) {
                                            ImVec2 boneFrom, boneTo;
                                            if (W2S(Player->GetBonePos(lastBone.c_str(), {}),
                                                    (FVector2D *) &boneFrom) &&
                                                W2S(Player->GetBonePos(currentBone.c_str(), {}),
                                                    (FVector2D *) &boneTo)) {
                                                draw->AddLine(boneFrom, boneTo,
                                                              PlayerSklai, Config.Skeleton);
                                            }
                                        }
                                        lastBone = currentBone;
                                    }
                                }
                            }else{
                                for (auto &boneStructure: skeleton) {
                                    std::string lastBone;
                                    for (std::string &currentBone: boneStructure) {
                                        if (!lastBone.empty()) {
                                            ImVec2 boneFrom, boneTo;
                                            if (W2S(Player->GetBonePos(lastBone.c_str(), {}),
                                                    (FVector2D *) &boneFrom) &&
                                                W2S(Player->GetBonePos(currentBone.c_str(), {}),
                                                    (FVector2D *) &boneTo)) {
                                                draw->AddLine(boneFrom, boneTo,
                                                              PlayerSkl, Config.Skeleton);
                                            }
                                        }
                                        lastBone = currentBone;
                                    }
                                }

                            }


                        }

                        if (Config.ESPMenu.Health) {
                            int CurHP = (int) std::max(0, std::min((int) Player->Health, (int) Player->HealthMax));
                            int MaxHP = (int) Player->HealthMax;

                            long curHP_Color = IM_COL32(std::min(((510 * (MaxHP - CurHP)) / MaxHP), 255),std::min((510 * CurHP) / MaxHP, 255), 0, 255);

                            if (Player->Health == 0.0f && !Player->bDead) {
                                curHP_Color = IM_COL32(255, 0, 0, 255);

                                CurHP = Player->NearDeathBreath;
                                if (Player->NearDeatchComponent) {
                                    MaxHP = Player->NearDeatchComponent->BreathMax;
                                }
                            }
                            ImVec2 vEndFilled = ImVec2(headPosSC.x - healthLength + (2 * healthLength) * CurHP / 100, headPosSC.y - 15);
                            DrawBoxEnemy(draw, ImVec2(headPosSC.x - healthLength, headPosSC.y - 15), vEndFilled, 4, curHP_Color);
                            draw->AddRect(ImVec2(headPosSC.x - healthLength, headPosSC.y - 18), ImVec2(headPosSC.x + healthLength, headPosSC.y - 12), IM_COL32(0, 0, 0, 255));
                        }

                        if (Config.ESPMenu.Name || Config.ESPMenu.Distance || Config.ESPMenu.TeamID) {
                            DrawBoxEnemy(draw, ImVec2(headPosSC.x - healthLength, headPosSC.y - 28), ImVec2(headPosSC.x + healthLength, headPosSC.y - 28), 22, IM_COL32(0, 0, 0, 255));
                        }

                        if (Config.ESPMenu.Distance) {
                            std::string s;
                            s += std::to_string((int) Distance);
                            s += "M";
                            float a = 30;
                            if (Distance >= 100)
                            {
                                a = 35;
                            }
                            draw->AddText(nullptr, 16.f, ImVec2(headPosSC.x + healthLength - a, headPosSC.y - 35.0f), IM_COL32(255, 255, 255, 255), s.c_str());
                        }
                        if (Config.ESPMenu.Name) {
                            std::string s;
                            int NameColor;
                            float a = 5;

                            if (Player->bIsAI) {
                                NameColor = IM_COL32(0, 255, 0, 255);
                                s += "[BOT] ";
                                s += Player->PlayerName.ToString();
                            } else {
                                NameColor = IM_COL32(255, 255, 100, 255);
                                s += "[";
                                s += std::to_string((int) Player->TeamID);
                                s += "] ";
                                s += Player->PlayerName.ToString();
                            }
                            draw->AddText(nullptr, 15.f, ImVec2(headPosSC.x - healthLength + a, headPosSC.y - 35.0f), NameColor, s.c_str());
                        }

                    }
                }
                if (Config.VehicleESP.ShowVehicle || Config.VehicleESP.VehicleFuel || Config.VehicleESP.VehicleHP)
                {
                    if (Actors[i]->IsA(ASTExtraVehicleBase::StaticClass()))
                    {
                        auto Vehicle = (ASTExtraVehicleBase *)Actors[i];
                        if (!Vehicle->Mesh)
                            continue;
                        int CurHP = (int) std::max(0, std::min((int) Vehicle->VehicleCommon->HP, (int) Vehicle->VehicleCommon->HPMax));
                        int MaxHP = (int) Vehicle->VehicleCommon->HPMax;
                        long curHP_Color = IM_COL32(std::min(((510 * (MaxHP - CurHP)) / MaxHP), 255), std::min(((510 * CurHP) / MaxHP), 255), 0, 155);
                        float Distance = Vehicle->GetDistanceTo(localPlayer) / 100.f;
                        FVector2D vehiclePos;
                        if (W2S(Vehicle->K2_GetActorLocation(), &vehiclePos))
                        {
                            auto mWidthScale = std::min(0.10f * Distance, 50.f);
                            auto mWidth = 70.f - mWidthScale;
                            auto mHeight = mWidth * 0.15f;
                            if (Config.VehicleESP.Vehicle)
                            {
                                std::string s = GetVehicleName(Vehicle);
                                s += " [";
                                s += std::to_string((int)Distance);
                                s += "m]";
                                draw->AddText(NULL, ((float)density / 18.0f), {vehiclePos.X - (mWidth / 2), vehiclePos.Y}, ToColor(Config.ColorsESP.Vehicle), s.c_str());
                            }
                            if (Config.VehicleESP.VehicleFuel)
                            {
                                std::string sf;
                                sf += "[Fuel:";
                                sf += std::to_string((int)(100 * Vehicle->VehicleCommon->Fuel / Vehicle->VehicleCommon->FuelMax));
                                sf += "]";
                                draw->AddText(NULL, ((float)density / 18.0f), {vehiclePos.X - (mWidth / 2), vehiclePos.Y + 15.f}, IM_COL32(255, 255, 0, 255), sf.c_str());
                            }
                            if (Config.VehicleESP.VehicleHP)
                            {
                                ImVec2 vStart = {vehiclePos.X - (mWidth / 2), vehiclePos.Y - (mHeight * 1.5f)};
                                ImVec2 vEndFilled = {vStart.x + (CurHP * mWidth / MaxHP), vStart.y + mHeight};
                                ImVec2 vEndRect = {vStart.x + mWidth, vStart.y + mHeight};
                                draw->AddRectFilled(vStart, vEndFilled, curHP_Color, 3.2f, 240);
                                draw->AddRect(vStart, vEndRect, IM_COL32(000, 000, 000, 255), 3.2f, 240);
                            }
                        }
                    }
                }

                if (Config.ESPMenu.LootBox) {
                    if (Actor->IsA(APickUpListWrapperActor::StaticClass())) {
                        auto LootBox = (APickUpListWrapperActor *) Actor;
                        auto RootComponent = Actor->RootComponent;
                        if (!RootComponent)
                            continue;
                        float Distance = LootBox->GetDistanceTo(localPlayer) / 100.f;

                        FVector2D lootboxPos;
                        if (W2S(LootBox->K2_GetActorLocation(), &lootboxPos)) {
                            std::string s = ICON_FA_USER "LootBox";
                            s += "[";
                            s += std::to_string((int) Distance);
                            s += "M]";

                            draw->AddText(NULL, ((float) density / 10.0f),
                                          {lootboxPos.X, lootboxPos.Y},
                                          IM_COL32(255, 255, 000, 255), s.c_str());
                        }
                    }
                }

                if (Config.ESPMenu.Grenade) {
                    if (Actor->IsA(ASTExtraGrenadeBase::StaticClass())) {
                        auto Grenade = (ASTExtraGrenadeBase *) Actor;
                        auto RootComponent = Actor->RootComponent;
                        if (!RootComponent)
                            continue;
                        float Distance = Grenade->GetDistanceTo(localPlayer) / 100.f;

                        FVector2D grenadePos;

                        if (W2S(Grenade->K2_GetActorLocation(), &grenadePos)) {
                            std::string s = ICON_FA_BOMB "Grenade";
                            s += "[";
                            s += std::to_string((int) Distance);
                            s += "M]";

                            draw->AddText(NULL, ((float) density / 10.0f),
                                          {grenadePos.X, grenadePos.Y},
                                          IM_COL32(255, 255, 000, 255), s.c_str());
                        }
                    }
                }
            }
        }
    }
    g_LocalController = localController;
    g_LocalPlayer = localPlayer;
    if (totalEnemies > 0 || totalBots > 0) {
        std::string s;
        if (totalEnemies > 0) {
            s = "Enem";
            if (totalEnemies > 1)
                s += "ies";
            else s += "y";
            s += " Around: ";
            s += std::to_string(totalEnemies);
            if (totalBots > 0)
                s += " | ";
        }
        if (totalBots) {
            s += "Bot";
            if (totalBots > 1)
                s += "s";
            s += " Around: ";
            s += std::to_string(totalBots);
        }

        auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, s.size());
        draw->AddText(NULL, ((float) density / 10.0f), {((float) glWidth / 2) - (textSize.x / 2), 70},
                      ToColor(Config.ColorsESP.Count), s.c_str());

    }
    fps.update();
}
