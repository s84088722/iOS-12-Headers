//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSDictionary, NSMutableDictionary, NSString, SUScriptAppleAccountType;

@interface SUScriptACClientAccessInfo : SUScriptObject
{
    SUScriptAppleAccountType *_accountType;
    NSMutableDictionary *_dictionary;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(readonly) NSString *accessKeyPurposeStatement;
@property(readonly) NSString *accessKeyFacebookPermissions;
@property(readonly) NSString *accessKeyFacebookAppID;
- (id)_className;
- (id)valueForAccessKey:(id)arg1;
- (void)setValue:(id)arg1 forAccessKey:(id)arg2;
@property(retain) SUScriptAppleAccountType *accountType;
@property(readonly) NSDictionary *accessInfoDictionary;
- (void)dealloc;
- (id)init;

@end

