/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:52:45 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIActivity.h>

@class MiroMovie;

@interface MiroTapToRadarActivity : UIActivity {

	MiroMovie* _tapToRadarMovie;

}

@property (assign,nonatomic,__weak) MiroMovie * tapToRadarMovie;              //@synthesize tapToRadarMovie=_tapToRadarMovie - In the implementation block
-(MiroMovie *)tapToRadarMovie;
-(void)setTapToRadarMovie:(MiroMovie *)arg1 ;
-(id)activityTitle;
-(id)activityType;
-(id)activityImage;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg1 ;
@end

