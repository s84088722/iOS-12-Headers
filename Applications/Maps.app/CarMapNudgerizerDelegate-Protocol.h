//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CarMapNudgerizer, MKMapView;

@protocol CarMapNudgerizerDelegate <NSObject>

@optional
- (void)nudgerizer:(CarMapNudgerizer *)arg1 didGestureMapView:(MKMapView *)arg2 inDirection:(long long)arg3;
@end
