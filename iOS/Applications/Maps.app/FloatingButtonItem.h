//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIButton;

__attribute__((visibility("hidden")))
@interface FloatingButtonItem : NSObject
{
    UIButton *_button;
    long long _option;
}

@property(readonly, nonatomic) long long option; // @synthesize option=_option;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (id)initWithButton:(id)arg1 option:(long long)arg2;

@end

