#ifdef RCT_NEW_ARCH_ENABLED
#import <RNReanimated3/NewestShadowNodesRegistry.h>
#import <RNReanimated3/ReanimatedUIManagerBinding.h>
#endif

#import <React/RCTBridgeModule.h>
#import <React/RCTEventDispatcher.h>
#import <React/RCTEventEmitter.h>
#import <React/RCTUIManager.h>
#import <React/RCTUIManagerObserverCoordinator.h>
#import <React/RCTUIManagerUtils.h>

#import <RNReanimated3/REANodesManager.h>

@interface REAModule : RCTEventEmitter <RCTBridgeModule, RCTEventDispatcherObserver, RCTUIManagerObserver>

@property (nonatomic, readonly) REANodesManager *nodesManager;

#ifdef RCT_NEW_ARCH_ENABLED
- (void)installReanimatedUIManagerBindingAfterReload;
#endif

@end
