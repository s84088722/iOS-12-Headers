//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHObject.h>

@class NSString;

@interface PHMomentShareParticipant : PHObject
{
    unsigned short _type;
    NSString *_emailAddress;
    NSString *_phoneNumber;
}

+ (void)queryParticipantsWithEmails:(id)arg1 phoneNumbers:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)fetchParticipantsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchParticipantsInMomentShare:(id)arg1 options:(id)arg2;
+ (id)localIdentifierWithUUID:(id)arg1;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)entityKeyMap;
+ (id)identifierCode;
+ (id)fetchType;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(readonly, nonatomic) unsigned short type; // @synthesize type=_type;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (Class)changeRequestClass;

@end

