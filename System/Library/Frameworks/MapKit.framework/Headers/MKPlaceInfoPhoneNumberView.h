/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:30:40 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceInfoContactRowView.h>

@class _MKUILabel;

@interface MKPlaceInfoPhoneNumberView : MKPlaceInfoContactRowView {

	_MKUILabel* _optsOutOfAdsView;
	BOOL _optsOutOfAds;

}

@property (assign,nonatomic) BOOL optsOutOfAds;              //@synthesize optsOutOfAds=_optsOutOfAds - In the implementation block
-(id)draggableContent;
-(int)analyticsTarget;
-(id)_valueString;
-(id)_icon;
-(id)_iconAccessibilityLabel;
-(Class)_labeledValueExpectedValueType;
-(void)setOptsOutOfAds:(BOOL)arg1 ;
-(BOOL)optsOutOfAds;
-(id)initWithFrame:(CGRect)arg1 ;
@end
