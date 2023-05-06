#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_123a/steam_api.h"
#include "steamworks_sdk_123a/isteamgameserver.h"
#include "steamworks_sdk_123a/isteamgameserverstats.h"
#include "steamworks_sdk_123a/isteamgamecoordinator.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
extern "C" {
#define SDKVER_123a
#include "struct_converters.h"
void win_to_lin_struct_LeaderboardEntry_t_123a(const struct winLeaderboardEntry_t_123a *win, struct LeaderboardEntry_t *lin)
{
    lin->m_steamIDUser = win->m_steamIDUser;
    lin->m_nGlobalRank = win->m_nGlobalRank;
    lin->m_nScore = win->m_nScore;
    lin->m_cDetails = win->m_cDetails;
    lin->m_hUGC = win->m_hUGC;
}

void lin_to_win_struct_LeaderboardEntry_t_123a(const struct LeaderboardEntry_t *lin, struct winLeaderboardEntry_t_123a *win)
{
    win->m_steamIDUser = lin->m_steamIDUser;
    win->m_nGlobalRank = lin->m_nGlobalRank;
    win->m_nScore = lin->m_nScore;
    win->m_cDetails = lin->m_cDetails;
    win->m_hUGC = lin->m_hUGC;
}


}
