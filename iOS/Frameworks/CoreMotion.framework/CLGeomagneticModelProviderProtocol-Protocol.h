//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreMotion/CLNotifierServiceProtocol-Protocol.h>

@protocol CLGeomagneticModelProviderProtocol <CLNotifierServiceProtocol>
- (_Bool)syncgetDoSync:(void (^)(struct CLGeomagneticModelProvider *))arg1;
- (void)doAsync:(void (^)(struct CLGeomagneticModelProvider *))arg1 withReply:(void (^)(void))arg2;
- (void)doAsync:(void (^)(struct CLGeomagneticModelProvider *))arg1;
@end

