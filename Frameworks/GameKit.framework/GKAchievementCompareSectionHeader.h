/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImageView, UILabel;

@interface GKAchievementCompareSectionHeader : GKDecoratedLabel {
    UIImageView *_cellSeparatorViewLeft;
    UIImageView *_cellSeparatorViewRight;
    UILabel *_friendLabel;
    UILabel *_meLabel;
}

@property(retain) UIImageView * cellSeparatorViewLeft;
@property(retain) UIImageView * cellSeparatorViewRight;
@property(retain) UILabel * friendLabel;
@property(retain) UILabel * meLabel;

- (id)cellSeparatorViewLeft;
- (id)cellSeparatorViewRight;
- (void)dealloc;
- (id)friendLabel;
- (void)layoutSubviewsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)meLabel;
- (void)setCellSeparatorViewLeft:(id)arg1;
- (void)setCellSeparatorViewRight:(id)arg1;
- (void)setFriendLabel:(id)arg1;
- (void)setMeLabel:(id)arg1;
- (void)setTheme:(id)arg1;

@end
