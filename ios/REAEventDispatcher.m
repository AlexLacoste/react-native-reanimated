#import <RNReanimated3/REAEventDispatcher.h>
#import <React/RCTBridge+Private.h>
#import <React/RCTDefines.h>

@implementation REAEventDispatcher

- (void)sendEvent:(id<RCTEvent>)event
{
  [[[self bridge] moduleForName:@"ReanimatedModule"] eventDispatcherWillDispatchEvent:event];
  [super sendEvent:event];
}

+ (NSString *)moduleName
{
  return NSStringFromClass([RCTEventDispatcher class]);
}

@end
