#import <RNReanimated3/REAAnimationsManager.h>
#import <RNReanimated3/REASnapshot.h>

@interface REASharedTransitionManager : NSObject

- (void)notifyAboutNewView:(UIView *)view;
- (void)notifyAboutViewLayout:(UIView *)view withViewFrame:(CGRect)frame;
- (void)viewsDidLayout;
- (BOOL)configureAndStartSharedTransitionForViews:(NSArray<UIView *> *)views;
- (void)finishSharedAnimation:(UIView *)view;
- (void)setFindPrecedingViewTagForTransitionBlock:
    (REAFindPrecedingViewTagForTransitionBlock)findPrecedingViewTagForTransition;
- (void)setCancelAnimationBlock:(REACancelAnimationBlock)cancelAnimationBlock;
- (instancetype)initWithAnimationsManager:(REAAnimationsManager *)animationManager;
- (UIView *)getTransitioningView:(NSNumber *)tag;

@end
