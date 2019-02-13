//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstallCoordination/NSSecureCoding-Protocol.h>

@class IXDataPromiseSeed, NSError, NSString, NSUUID;

@interface IXDataPromise : NSObject <NSSecureCoding>
{
    _Bool _complete;
    NSError *_error;
    unsigned long long _errorSourceIdentifier;
    IXDataPromiseSeed *_seed;
}

+ (_Bool)supportsSecureCoding;
+ (id)outstandingPromisesForCreator:(unsigned long long)arg1;
@property(retain, nonatomic) IXDataPromiseSeed *seed; // @synthesize seed=_seed;
@property(nonatomic) unsigned long long errorSourceIdentifier; // @synthesize errorSourceIdentifier=_errorSourceIdentifier;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (oneway void)_clientDelegate_didCancelWithError:(id)arg1 client:(unsigned long long)arg2;
- (oneway void)_clientDelegate_didComplete;
- (void)preflightWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)resetWithError:(id *)arg1;
- (void)resetWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)cancelForReason:(id)arg1 client:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)cancelForReason:(id)arg1 error:(id *)arg2;
- (void)cancelForReason:(id)arg1 client:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancelForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 client:(unsigned long long)arg2 diskSpaceNeeded:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) double percentComplete; // @dynamic percentComplete;
@property(readonly, nonatomic) _Bool localIsComplete; // @dynamic localIsComplete;
@property(nonatomic, getter=isComplete) _Bool complete; // @synthesize complete=_complete;
@property(readonly, nonatomic) NSError *localError; // @dynamic localError;
@property(readonly, nonatomic) NSError *errorOccurred;
@property(readonly, nonatomic) unsigned long long totalBytesNeededOnDisk; // @dynamic totalBytesNeededOnDisk;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @dynamic uniqueIdentifier;
@property(readonly, nonatomic) unsigned long long creatorIdentifier; // @dynamic creatorIdentifier;
@property(readonly, copy, nonatomic) NSString *name; // @dynamic name;
@property(readonly, nonatomic) Class seedClass;
- (void)dealloc;
- (void)_updateInitWithSeed:(id)arg1 notifyDaemon:(_Bool)arg2;
- (id)initWithSeed:(id)arg1;

@end

