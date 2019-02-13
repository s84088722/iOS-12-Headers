//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class INRideOption, NSArray, NSNumber, NSString, NSUserActivity, RidesharingSpecialPricingBadge, UIImage;
@protocol RideBookingApplication;

__attribute__((visibility("hidden")))
@interface RideBookingRideOption : NSObject
{
    NSString *_name;
    NSArray *_paymentMethods;
    NSArray *_passengerChoices;
    id <RideBookingApplication> _application;
    UIImage *_icon;
    NSNumber *_etaMinutes;
}

@property(retain, nonatomic) NSNumber *etaMinutes; // @synthesize etaMinutes=_etaMinutes;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) __weak id <RideBookingApplication> application; // @synthesize application=_application;
@property(readonly, nonatomic) NSArray *passengerChoices; // @synthesize passengerChoices=_passengerChoices;
@property(readonly, nonatomic) NSArray *paymentMethods; // @synthesize paymentMethods=_paymentMethods;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)initWithApplication:(id)arg1 optionName:(id)arg2 paymentMethods:(id)arg3 estimatedPickupDate:(id)arg4 passengersChoice:(id)arg5;
@property(copy, nonatomic) INRideOption *intentsRideOption;
@property(readonly, nonatomic) NSUserActivity *userActivityForBookingInApplication;
@property(readonly, nonatomic) RidesharingSpecialPricingBadge *specialPricingBadge;
@property(readonly, nonatomic) NSString *partySizeSelectionPrompt;
@property(readonly, nonatomic) NSString *priceRange;
@property(readonly, nonatomic) NSString *detailedDescription;
@property(readonly, nonatomic) NSString *selectionCommandTitle;
@property(readonly, nonatomic) UIImage *iconImage;

@end

