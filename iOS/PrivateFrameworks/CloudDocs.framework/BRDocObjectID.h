//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocs/BRFileObjectID.h>

@interface BRDocObjectID : BRFileObjectID
{
    unsigned int _docID;
}

+ (_Bool)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isDocumentID;
- (id)documentID;
- (unsigned long long)rawID;
- (id)asString;
- (id)description;
- (id)initWithDocID:(unsigned int)arg1;
- (id)initWithDocIDNumber:(id)arg1;

@end

