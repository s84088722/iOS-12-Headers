//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDuet/_DKObject.h>

@class NSString;

@interface _DKRelation : _DKObject
{
    NSString *_verbPhrase;
    _DKObject *_subject;
    _DKObject *_object;
}

+ (_Bool)supportsSecureCoding;
+ (id)relationWithSubject:(id)arg1 verbPhrase:(id)arg2 object:(id)arg3;
+ (id)objectFromManagedObject:(id)arg1 readMetadata:(_Bool)arg2 cache:(id)arg3;
+ (id)entityName;
@property(readonly) _DKObject *object; // @synthesize object=_object;
@property(readonly) _DKObject *subject; // @synthesize subject=_subject;
@property(readonly) NSString *verbPhrase; // @synthesize verbPhrase=_verbPhrase;
- (void).cxx_destruct;
- (id)stringValue;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubject:(id)arg1 verbPhrase:(id)arg2 object:(id)arg3;
- (_Bool)copyToManagedObject:(id)arg1;

@end

