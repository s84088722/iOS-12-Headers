//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

@protocol _SFActivityDelegate;

@interface _SFActivity : UIActivity
{
    id <_SFActivityDelegate> _delegate;
}

@property(nonatomic) __weak id <_SFActivityDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)activityDidFinish:(_Bool)arg1;

@end

