/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class IUNowPlayingObserver, MPAVController, MPMediaItem;

@interface IUMusicPlayerServerDelegate : NSObject <MPMusicPlayerControllerServerDelegate> {
    MPMediaItem *_firstItem;
    IUNowPlayingObserver *_nowPlayingObserver;
    id _repeatChangeHandler;
    MPAVController *_repeatChangeHandlerPlayer;
    id _shuffleChangeHandler;
    MPAVController *_shuffleChangeHandlerPlayer;
    int _shuffleMode;
}

- (void)_appDefaultsChangedNotification:(id)arg1;
- (id)currentMediaQueryForMusicPlayerServer:(id)arg1;
- (void)dealloc;
- (unsigned int)indexOfNowPlayingItemForMusicPlayerServer:(id)arg1;
- (id)init;
- (BOOL)isNowPlayingItemFromGeniusMixForMusicPlayerServer:(id)arg1;
- (void)musicPlayerServer:(id)arg1 prepareQueueWithGeniusMixPlaylist:(id)arg2;
- (void)musicPlayerServer:(id)arg1 prepareQueueWithQuery:(id)arg2;
- (void)musicPlayerServer:(id)arg1 registerForRepeatModeChangesWithChangeHandler:(id)arg2;
- (void)musicPlayerServer:(id)arg1 registerForShuffleModeChangesWithChangeHandler:(id)arg2;
- (void)musicPlayerServer:(id)arg1 setFirstItem:(id)arg2;
- (void)musicPlayerServer:(id)arg1 setNowPlayingItem:(id)arg2;
- (void)musicPlayerServer:(id)arg1 setPlaybackSpeed:(int)arg2;
- (void)musicPlayerServer:(id)arg1 setShuffleMode:(int)arg2;
- (id)nowPlayingItemForMusicPlayerServer:(id)arg1;
- (int)playbackSpeedForMusicPlayerServer:(id)arg1;
- (id)playerForMusicPlayerServer:(id)arg1 usingApplicationSpecificQueue:(BOOL)arg2;
- (unsigned int)unshuffledIndexOfNowPlayingItemForMusicPlayerServer:(id)arg1;

@end
