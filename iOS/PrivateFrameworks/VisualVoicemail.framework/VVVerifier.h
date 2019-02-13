//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface VVVerifier : NSObject
{
    NSMutableDictionary *_checkpointDictionary;
    NSArray *_keyDescriptions;
    NSString *_serviceIdentifier;
}

+ (id)homeDirectory;
@property(readonly, copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
- (void).cxx_destruct;
- (id)humanReadableConfigurationDictionary:(id *)arg1;
- (void)_mapFromSourceDictionary:(id)arg1 destinationDictionary:(id)arg2 inKey:(id)arg3 outDescription:(id)arg4;
- (id)configurationDictionary;
- (void)_checkpointDictionaryChanged;
- (id)readableError;
- (id)keyDescriptions;
- (_Bool)valueForCheckpointKey:(id)arg1 exists:(_Bool *)arg2;
- (void)storeValue:(_Bool)arg1 forCheckpointKey:(id)arg2;
- (void)_saveCheckpointDictionary;
- (id)_checkpointDictionary;
- (id)_checkpointDictionaryFilePath;
- (id)initWithServiceIdentifier:(id)arg1;

@end

