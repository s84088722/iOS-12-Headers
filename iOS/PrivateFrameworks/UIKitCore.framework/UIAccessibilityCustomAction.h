//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString;

@interface UIAccessibilityCustomAction : NSObject
{
    NSAttributedString *_attributedName;
    id _target;
    SEL _selector;
}

@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(copy, nonatomic) NSAttributedString *attributedName; // @synthesize attributedName=_attributedName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *name;
- (id)initWithAttributedName:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)initWithName:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)init;

@end

