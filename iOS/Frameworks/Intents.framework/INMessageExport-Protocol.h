//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INPerson, NSArray, NSDate, NSNumber, NSString;

@protocol INMessageExport <NSObject, JSExport>
@property(nonatomic) long long messageEffectType;
@property(nonatomic) long long messageType;
@property(copy, nonatomic) NSNumber *numberOfAttachments;
@property(copy, nonatomic) NSDate *dateMessageWasLastRead;
@property(copy, nonatomic) NSArray *recipients;
@property(copy, nonatomic) INPerson *sender;
@property(copy, nonatomic) NSDate *dateSent;
@property(copy, nonatomic) NSString *content;
@property(copy, nonatomic) NSString *conversationIdentifier;
@property(copy, nonatomic) NSString *identifier;
- (id)init;
@end
