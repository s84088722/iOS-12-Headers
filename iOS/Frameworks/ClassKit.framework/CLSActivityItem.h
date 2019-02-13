//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClassKit/CLSObject.h>

#import <ClassKit/CLSRelationable-Protocol.h>

@class NSString;

@interface CLSActivityItem : CLSObject <CLSRelationable>
{
    NSString *_title;
    NSString *_identifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)relations;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *title;
- (_Bool)validateObject:(id *)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

