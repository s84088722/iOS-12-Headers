//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebUI/NSObject-Protocol.h>

@protocol WBSFormAutoFillNode <NSObject>
- (long long)htmlInputElementLastAutoFillButtonType;
- (long long)htmlInputElementAutoFillButtonType;
- (void)setHTMLInputElementAutoFilledWithAutomaticStrongPassword:(_Bool)arg1;
- (_Bool)isHTMLTextAreaElementUserEdited;
- (_Bool)isHTMLInputElementUserEdited;
- (void)setHTMLInputElementAutofilled:(_Bool)arg1;
- (struct CGRect)elementBounds;
- (id)initWithJSWrapper:(struct OpaqueJSValue *)arg1 inContext:(struct OpaqueJSContext *)arg2;

@optional
- (void)setHTMLInputElementSpellCheckEnabled:(_Bool)arg1;
@end

