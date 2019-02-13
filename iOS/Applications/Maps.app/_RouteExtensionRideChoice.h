//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RouteExtensionRidePreferredChoice-Protocol.h"

@class NSString, UIImage, _RouteExtensionRideChoiceGroup;

__attribute__((visibility("hidden")))
@interface _RouteExtensionRideChoice : NSObject <RouteExtensionRidePreferredChoice>
{
    UIImage *_image;
    NSString *_title;
    NSString *_priceRangeCaption;
    NSString *_rideWaitSubtitle;
    NSString *_ETASubtitle;
    NSString *_bookingCommandTitle;
    CDUnknownBlockType _performBooking;
    NSString *_expandToChoiceGroupCommandTitle;
    _RouteExtensionRideChoiceGroup *_owningGroup;
    CDUnknownBlockType _performExpandingToChoiceGroup;
}

@property(copy, nonatomic) CDUnknownBlockType performExpandingToChoiceGroup; // @synthesize performExpandingToChoiceGroup=_performExpandingToChoiceGroup;
@property(nonatomic) __weak _RouteExtensionRideChoiceGroup *owningGroup; // @synthesize owningGroup=_owningGroup;
@property(copy, nonatomic) NSString *expandToChoiceGroupCommandTitle; // @synthesize expandToChoiceGroupCommandTitle=_expandToChoiceGroupCommandTitle;
@property(copy, nonatomic) CDUnknownBlockType performBooking; // @synthesize performBooking=_performBooking;
@property(copy, nonatomic) NSString *bookingCommandTitle; // @synthesize bookingCommandTitle=_bookingCommandTitle;
@property(copy, nonatomic) NSString *ETASubtitle; // @synthesize ETASubtitle=_ETASubtitle;
@property(copy, nonatomic) NSString *rideWaitSubtitle; // @synthesize rideWaitSubtitle=_rideWaitSubtitle;
@property(copy, nonatomic) NSString *priceRangeCaption; // @synthesize priceRangeCaption=_priceRangeCaption;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)expandToChoiceGroup;
- (void)book;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
