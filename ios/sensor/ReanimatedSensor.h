#if __has_include(<CoreMotion/CoreMotion.h>)
#import <CoreMotion/CoreMotion.h>
#endif
#import <RNReanimated3/ReanimatedSensorType.h>

@interface ReanimatedSensor : NSObject {
  ReanimatedSensorType _sensorType;
  double _interval;
  double _lastTimestamp;
  int _referenceFrame;
#if !TARGET_OS_TV
  CMMotionManager *_motionManager;
#endif
  void (^_setter)(double[], int);
}

- (instancetype)init:(ReanimatedSensorType)sensorType
             interval:(int)interval
    iosReferenceFrame:(int)iosReferenceFrame
               setter:(void (^)(double[], int))setter;
- (bool)initialize;
- (bool)initializeGyroscope;
- (bool)initializeAccelerometer;
- (bool)initializeGravity;
- (bool)initializeMagnetometer;
- (bool)initializeOrientation;
- (void)cancel;

@end
