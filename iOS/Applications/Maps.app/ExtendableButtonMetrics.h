//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIFont;

__attribute__((visibility("hidden")))
@interface ExtendableButtonMetrics : NSObject
{
    UIFont *_font;
    struct UIEdgeInsets _contentInsets;
}

@property(readonly, nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(readonly, nonatomic) UIFont *font; // @synthesize font=_font;
- (void).cxx_destruct;
- (id)initWithFont:(id)arg1 insets:(struct UIEdgeInsets)arg2;

@end
