//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSDictionary, NSString;

@interface SUScriptFacebookFriend : SUScriptObject
{
    NSDictionary *_dictionary;
}

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(readonly) NSString *name;
@property(readonly) NSString *identifier;
- (id)_className;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)initWithFriendDictionary:(id)arg1;

@end

