//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUSingleSourceDefinition.h>

@class NSString, NSURL;

@interface NUFileSourceDefinition : NUSingleSourceDefinition
{
    _Bool _useEmbeddedPreview;
    NSURL *_url;
    NSString *_uti;
}

@property(nonatomic) _Bool useEmbeddedPreview; // @synthesize useEmbeddedPreview=_useEmbeddedPreview;
@property(readonly) NSString *uti; // @synthesize uti=_uti;
@property(readonly) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 UTI:(id)arg2;
- (id)init;
- (id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id *)arg2;

@end

