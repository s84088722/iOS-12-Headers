//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/NSSecureCoding-Protocol.h>

@class NSString;

@interface CNChangeHistoryFetchRequest : NSObject <NSSecureCoding>
{
    _Bool _unifyResults;
    _Bool _includeGroupChanges;
    _Bool _includeChangeAnchors;
    NSString *_clientIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool includeChangeAnchors; // @synthesize includeChangeAnchors=_includeChangeAnchors;
@property(nonatomic) _Bool includeGroupChanges; // @synthesize includeGroupChanges=_includeGroupChanges;
@property(nonatomic) _Bool unifyResults; // @synthesize unifyResults=_unifyResults;
@property(readonly, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithClientIdentifier:(id)arg1;

@end

