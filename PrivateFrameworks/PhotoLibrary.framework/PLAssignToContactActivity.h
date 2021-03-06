/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class ABPeoplePickerNavigationController, PLPhotoTileViewController;

@interface PLAssignToContactActivity : PLActivity <ABPeoplePickerNavigationControllerDelegate, PLUIEditImageViewControllerDelegate> {
    ABPeoplePickerNavigationController *_peoplePicker;
    void *_person;
    PLPhotoTileViewController *_tile;
}

@property(retain) PLPhotoTileViewController * tile;

- (id)_activityImage;
- (id)_beforeActivity;
- (BOOL)_canPerformWithSuppliedActivityItems:(id)arg1;
- (void)_clearPeoplePicker;
- (id)_embeddedActivityViewController;
- (void)_handleCompletionWithStatus:(int)arg1;
- (int)_preferredStatusBarStyle;
- (void)_restoreOriginalStatusBar;
- (void)_savePhotoFinished:(id)arg1;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (void)dealloc;
- (void)editImageViewController:(id)arg1 didEditImageWithOptions:(id)arg2;
- (void)editImageViewControllerDidCancel:(id)arg1;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setTile:(id)arg1;
- (id)tile;

@end
