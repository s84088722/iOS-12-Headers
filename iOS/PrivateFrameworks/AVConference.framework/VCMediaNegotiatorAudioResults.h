//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorAudioResults : NSObject
{
    unsigned int _remoteSSRC;
    unsigned int _audioUnitModel;
    _Bool _allowRecording;
    _Bool _allowSwitching;
    int _primaryPayload;
    int _dtxPayload;
    int _redPayload;
    NSMutableArray *_secondaryPayloads;
    _Bool _useSBR;
}

@property(nonatomic) _Bool useSBR; // @synthesize useSBR=_useSBR;
@property(nonatomic) unsigned int remoteSSRC; // @synthesize remoteSSRC=_remoteSSRC;
@property(nonatomic) _Bool allowSwitching; // @synthesize allowSwitching=_allowSwitching;
@property(nonatomic) unsigned int audioUnitModel; // @synthesize audioUnitModel=_audioUnitModel;
@property(nonatomic) _Bool allowRecording; // @synthesize allowRecording=_allowRecording;
@property(readonly, nonatomic) NSArray *secondaryPayloads; // @synthesize secondaryPayloads=_secondaryPayloads;
@property(nonatomic) int redPayload; // @synthesize redPayload=_redPayload;
@property(nonatomic) int dtxPayload; // @synthesize dtxPayload=_dtxPayload;
@property(nonatomic) int primaryPayload; // @synthesize primaryPayload=_primaryPayload;
- (void)dealloc;
- (void)addSecondaryPayload:(int)arg1;
- (id)init;

@end

