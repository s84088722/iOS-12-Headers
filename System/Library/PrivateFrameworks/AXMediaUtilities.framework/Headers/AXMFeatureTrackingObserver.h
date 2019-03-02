/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:31:28 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXMFeatureTrackingObserver <NSObject>
@required
-(void)visionEngine:(id)arg1 didBeginTrackingFeature:(id)arg2 appliedOrientation:(id)arg3;
-(void)visionEngine:(id)arg1 didFinishTrackingFeature:(id)arg2 appliedOrientation:(id)arg3;
-(void)visionEngine:(id)arg1 trackingFeatureLocationDidChange:(id)arg2 appliedOrientation:(id)arg3;

@end
