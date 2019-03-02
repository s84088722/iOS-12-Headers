//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RestaurantReservationErrorController : NSObject
{
    NSString *_appName;
    NSString *_restaurantName;
    CDUnknownBlockType _cancelAction;
    CDUnknownBlockType _activityAction;
}

+ (_Bool)shouldDisplayAlertForResponseWithBookReservationIntentCode:(long long)arg1;
+ (_Bool)shouldDisplayAlertForResponseWithAvailableBookingsIntentCode:(long long)arg1;
@property(copy, nonatomic) CDUnknownBlockType activityAction; // @synthesize activityAction=_activityAction;
@property(copy, nonatomic) CDUnknownBlockType cancelAction; // @synthesize cancelAction=_cancelAction;
@property(copy, nonatomic) NSString *restaurantName; // @synthesize restaurantName=_restaurantName;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (void).cxx_destruct;
- (id)errorBodyForBookReservationIntentCode:(long long)arg1;
- (id)errorBodyForAvailableBookingsIntentCode:(long long)arg1;
- (id)alertActionsForBookReservationIntentResponse:(id)arg1 error:(id)arg2;
- (id)alertActionsForAvailableBookingsIntentResponse:(id)arg1 error:(id)arg2;
- (id)cancelAlertAction;
- (id)punchOutAlertActionForIntentResponse:(id)arg1;
- (id)alertControllerForBookReservationResponse:(id)arg1 error:(id)arg2;
- (id)alertControllerForAvailableBookingsResponse:(id)arg1 error:(id)arg2;
- (id)initWithAppName:(id)arg1 restaurantName:(id)arg2 cancelAction:(CDUnknownBlockType)arg3 activityAction:(CDUnknownBlockType)arg4;

@end
