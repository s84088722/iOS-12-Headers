//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CorePDF/NSXMLParserDelegate-Protocol.h>

@class NSMutableString, NSString;

__attribute__((visibility("hidden")))
@interface CPPDFAnnotationParserDelegate : NSObject <NSXMLParserDelegate>
{
    NSMutableString *_characters;
    _Bool _parseError;
    struct CGPoint _p[4];
    struct __CFArray *_quadPoints;
    struct CGRect _rect;
    struct __CFDictionary *_annotationDictionary;
    struct __CFString *_id;
    struct __CFString *_otherId;
    struct __CFString *_content;
    struct CGColor *_color;
}

@property(readonly, nonatomic) struct CGColor *color; // @synthesize color=_color;
@property(readonly, nonatomic) struct __CFString *content; // @synthesize content=_content;
@property(readonly, nonatomic) struct __CFString *otherId; // @synthesize otherId=_otherId;
@property(readonly, nonatomic) struct __CFString *annotationId; // @synthesize annotationId=_id;
@property(nonatomic) struct __CFDictionary *annotationDictionary; // @synthesize annotationDictionary=_annotationDictionary;
@property(readonly, nonatomic) _Bool parseError; // @synthesize parseError=_parseError;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parserDidStartDocument:(id)arg1;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)addQuadpoints;
@property(readonly, nonatomic) struct CGRect rect; // @dynamic rect;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

