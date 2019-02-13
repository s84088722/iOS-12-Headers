//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/LPCSSText-Protocol.h>
#import <LinkPresentation/NSCopying-Protocol.h>

@class LPPointUnit;

__attribute__((visibility("hidden")))
@interface LPPadding : NSObject <LPCSSText, NSCopying>
{
    LPPointUnit *_top;
    LPPointUnit *_leading;
    LPPointUnit *_bottom;
    LPPointUnit *_trailing;
}

@property(retain, nonatomic) LPPointUnit *trailing; // @synthesize trailing=_trailing;
@property(retain, nonatomic) LPPointUnit *bottom; // @synthesize bottom=_bottom;
@property(retain, nonatomic) LPPointUnit *leading; // @synthesize leading=_leading;
@property(retain, nonatomic) LPPointUnit *top; // @synthesize top=_top;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_lp_CSSText;
- (struct UIEdgeInsets)asInsetsForView:(id)arg1;
- (id)init;

@end

