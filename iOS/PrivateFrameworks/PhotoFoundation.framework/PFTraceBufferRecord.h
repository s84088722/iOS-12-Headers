//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString;

@interface PFTraceBufferRecord : NSObject
{
    NSArray *_backtraceSymbols;
    unsigned int _QoSClass;
    unsigned int _threadId;
    NSString *_bufferName;
    double _timestamp;
    NSString *_formattedDate;
    NSString *_filename;
    unsigned long long _lineNumber;
    void *_object;
    Class _objectClass;
    id _context;
    NSString *_message;
    NSData *_backtrace;
}

+ (id)filteredRecords:(id)arg1 include:(id)arg2 exclude:(id)arg3 context:(id)arg4;
+ (id)sortedRecords:(id)arg1 newestFirst:(_Bool)arg2;
@property(retain) NSData *backtrace; // @synthesize backtrace=_backtrace;
@property(retain) NSString *message; // @synthesize message=_message;
@property(retain) id context; // @synthesize context=_context;
@property(retain) Class objectClass; // @synthesize objectClass=_objectClass;
@property void *object; // @synthesize object=_object;
@property unsigned int threadId; // @synthesize threadId=_threadId;
@property unsigned int QoSClass; // @synthesize QoSClass=_QoSClass;
@property unsigned long long lineNumber; // @synthesize lineNumber=_lineNumber;
@property(retain) NSString *filename; // @synthesize filename=_filename;
@property(retain) NSString *formattedDate; // @synthesize formattedDate=_formattedDate;
@property double timestamp; // @synthesize timestamp=_timestamp;
@property(retain) NSString *bufferName; // @synthesize bufferName=_bufferName;
- (void).cxx_destruct;
- (id)_backtraceSymbols;
@property(readonly) NSArray *backtraceSymbols;
@property(readonly) NSString *niceBacktrace;
@property(readonly) NSString *QoSClassName;
- (id)description;
- (_Bool)matches:(id)arg1;
- (_Bool)match:(id)arg1 string:(id)arg2;

@end

