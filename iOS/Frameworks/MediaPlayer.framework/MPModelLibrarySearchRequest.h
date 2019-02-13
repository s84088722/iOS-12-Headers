//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPModelRequest.h>

@class MPMediaLibrary, NSArray, NSString;

@interface MPModelLibrarySearchRequest : MPModelRequest
{
    NSArray *_scopes;
    long long _maximumResultsPerScope;
    MPMediaLibrary *_mediaLibrary;
    NSString *_searchString;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(retain, nonatomic) MPMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property(nonatomic) long long maximumResultsPerScope; // @synthesize maximumResultsPerScope=_maximumResultsPerScope;
@property(copy, nonatomic) NSArray *scopes; // @synthesize scopes=_scopes;
- (void).cxx_destruct;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end

