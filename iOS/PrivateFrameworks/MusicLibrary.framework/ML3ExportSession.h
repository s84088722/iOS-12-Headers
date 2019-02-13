//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@class ML3MusicLibrary, NSOutputStream;

@interface ML3ExportSession : NSData
{
    ML3MusicLibrary *_library;
    NSOutputStream *_outputStream;
}

@property(readonly, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(readonly, nonatomic) ML3MusicLibrary *library; // @synthesize library=_library;
- (void).cxx_destruct;
- (id)exportPlaylistDeleted:(unsigned long long)arg1;
- (id)exportPlaylistAdded:(unsigned long long)arg1;
- (id)exportTrackDeleted:(unsigned long long)arg1;
- (id)exportTrackUpdated:(unsigned long long)arg1;
- (id)exportTrackAdded:(unsigned long long)arg1;
- (id)end;
- (id)begin:(unsigned int)arg1;
- (id)initWithLibrary:(id)arg1 outputStream:(id)arg2;

@end

