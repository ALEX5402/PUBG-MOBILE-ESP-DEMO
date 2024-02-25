#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum PixUI.EPXKeyboardTypes
enum class EPXKeyboardTypes : uint8_t
{
	EPXKeyboardTypes__em_px_key_board_default = 0,
	EPXKeyboardTypes__em_px_key_board_number = 1,
	EPXKeyboardTypes__em_px_key_board_password = 2,
	EPXKeyboardTypes__em_px_key_board_count = 3,
	EPXKeyboardTypes__em_px_key_board_MAX = 4
};


// Enum PixUI.EPXViewEvent
enum class EPXViewEvent : uint8_t
{
	EPXViewEvent__em_px_event_moveby = 0,
	EPXViewEvent__em_px_event_moveto = 1,
	EPXViewEvent__em_px_event_resizeby = 2,
	EPXViewEvent__em_px_event_resizeto = 3,
	EPXViewEvent__em_px_event_scrollby = 4,
	EPXViewEvent__em_px_event_scrollto = 5,
	EPXViewEvent__em_px_event_count = 6,
	EPXViewEvent__em_px_event_MAX  = 7
};


// Enum PixUI.EPXLogLevels
enum class EPXLogLevels : uint8_t
{
	EPXLogLevels__em_px_log_level_log = 0,
	EPXLogLevels__em_px_log_level_warning = 1,
	EPXLogLevels__em_px_log_level_error = 2,
	EPXLogLevels__em_px_log_level_count = 3,
	EPXLogLevels__em_px_log_level_MAX = 4
};


// Enum PixUI.EPXLogTypes
enum class EPXLogTypes : uint8_t
{
	EPXLogTypes__em_px_log_type_core = 0,
	EPXLogTypes__em_px_log_type_plugin = 1,
	EPXLogTypes__em_px_log_type_trace = 2,
	EPXLogTypes__em_px_log_type_script = 3,
	EPXLogTypes__em_px_log_type_count = 4,
	EPXLogTypes__em_px_log_type_MAX = 5
};



}

