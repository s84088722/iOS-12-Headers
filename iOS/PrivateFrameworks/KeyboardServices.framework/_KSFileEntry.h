//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <KeyboardServices/NSSecureCoding-Protocol.h>

@class NSData, NSMutableArray, NSMutableDictionary, NSString;

@interface _KSFileEntry : NSObject <NSSecureCoding>
{
    NSString *_name;
    NSMutableDictionary *_extendedAttributes;
    NSMutableArray *_tempFiles;
    NSMutableArray *_fileArray;
    NSData *_fileBlob;
}

+ (id)entryWithSerialisedDataAtURL:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, retain, nonatomic) NSMutableDictionary *extendedAttributes; // @synthesize extendedAttributes=_extendedAttributes;
@property(readonly, retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)restoreToPath:(id)arg1;
- (void)consistencyCheck;
- (id)description;
- (void)saveAttributesToURL:(id)arg1;
- (void)loadAttributesFromURL:(id)arg1;
- (void)performOnEverything:(CDUnknownBlockType)arg1;
- (unsigned long long)addBlobToFile:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)temporaryFileNameForType:(id)arg1;
- (id)serialiseToTemporaryFile;

@end

