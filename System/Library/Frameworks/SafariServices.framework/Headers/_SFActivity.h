/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:34:54 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIActivity.h>

@protocol _SFActivityDelegate;
@interface _SFActivity : UIActivity {

	id<_SFActivityDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_SFActivityDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<_SFActivityDelegate>)arg1 ;
-(id<_SFActivityDelegate>)delegate;
-(void)activityDidFinish:(BOOL)arg1 ;
@end
