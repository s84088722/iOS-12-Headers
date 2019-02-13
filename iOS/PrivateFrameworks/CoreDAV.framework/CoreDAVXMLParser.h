//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSXMLParser.h>

#import <CoreDAV/CoreDAVResponseBodyParser-Protocol.h>

@class CoreDAVErrorItem, CoreDAVItem, CoreDAVXMLElementGenerator, NSError, NSSet, NSString, NSURL;

@interface CoreDAVXMLParser : NSXMLParser <CoreDAVResponseBodyParser>
{
    CoreDAVXMLElementGenerator *_rootElementGenerator;
    CoreDAVXMLElementGenerator *_rootErrorGenerator;
    NSSet *_parseHints;
    NSURL *_baseURL;
}

+ (_Bool)canHandleContentType:(id)arg1;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(retain, nonatomic) NSSet *parseHints; // @synthesize parseHints=_parseHints;
@property(retain, nonatomic) CoreDAVXMLElementGenerator *rootErrorGenerator; // @synthesize rootErrorGenerator=_rootErrorGenerator;
@property(retain, nonatomic) CoreDAVXMLElementGenerator *rootElementGenerator; // @synthesize rootElementGenerator=_rootElementGenerator;
- (void).cxx_destruct;
@property(readonly, nonatomic) CoreDAVErrorItem *rootError;
@property(readonly, nonatomic) CoreDAVItem *rootElement;
- (_Bool)processData:(id)arg1 forTask:(id)arg2;
- (id)initWithRootElementNameSpace:(id)arg1 name:(id)arg2 parseClass:(Class)arg3 baseURL:(id)arg4;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSError *parserError; // @dynamic parserError;
@property(readonly) Class superclass;

@end

