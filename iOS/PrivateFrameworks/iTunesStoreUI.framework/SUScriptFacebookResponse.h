//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SUScriptError;

@interface SUScriptFacebookResponse : SUScriptObject
{
    NSString *_bodyData;
    SUScriptError *_error;
    long long _statusCode;
}

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(readonly) long long HTTPStatusCode;
@property(readonly) SUScriptError *error;
- (id)_className;
@property(readonly) NSString *bodyData;
- (void)dealloc;
- (id)initWithData:(id)arg1 response:(id)arg2 error:(id)arg3;

@end

