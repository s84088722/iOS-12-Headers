//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKitLegacy/DOMHTMLElement.h>

@class NSString;

@interface DOMHTMLScriptElement : DOMHTMLElement
{
}

- (void)setNonce:(id)arg1;
- (id)nonce;
- (void)setCrossOrigin:(id)arg1;
- (id)crossOrigin;
@property(copy) NSString *type;
@property(copy) NSString *src;
@property _Bool defer;
- (void)setAsync:(_Bool)arg1;
- (_Bool)async;
@property(copy) NSString *charset;
@property(copy) NSString *event;
@property(copy) NSString *htmlFor;
@property(copy) NSString *text;

@end

