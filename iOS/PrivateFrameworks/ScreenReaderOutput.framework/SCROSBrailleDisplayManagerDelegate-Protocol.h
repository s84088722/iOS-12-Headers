//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenReaderOutput/NSObject-Protocol.h>

@class NSArray, NSAttributedString, NSNumber, NSString, SCROBrailleKey;

@protocol SCROSBrailleDisplayManagerDelegate <NSObject>
- (void)handlePlayCommandNotSupportedSound;
- (void)handlePlayBorderHitSound;
- (void)handleDisplayModeChanged:(NSNumber *)arg1;
- (void)handleBrailleTableFailedToLoad:(NSString *)arg1;
- (void)handleBrailleDidShowNextAnnouncement:(NSNumber *)arg1;
- (void)handleBrailleDidShowPreviousAnnouncement:(NSNumber *)arg1;
- (void)handleBrailleDidPanRight:(NSNumber *)arg1 elementToken:(NSNumber *)arg2 appToken:(id)arg3;
- (void)handleBrailleDidPanLeft:(NSNumber *)arg1 elementToken:(NSNumber *)arg2 appToken:(id)arg3;
- (void)handleBrailleDidDisplay:(NSAttributedString *)arg1;
- (void)handleBrailleKeyMemorize:(SCROBrailleKey *)arg1;
- (void)handleBrailleKeyWillMemorize:(SCROBrailleKey *)arg1;
- (void)handleBrailleDeletedUntranslatedText:(NSString *)arg1 speakLiterally:(_Bool)arg2;
- (void)handleBrailleInsertedUntranslatedText:(NSString *)arg1 speakLiterally:(_Bool)arg2;
- (void)handleStartEditing;
- (void)handleBrailleReplaceTextRange:(struct _NSRange)arg1 withString:(NSString *)arg2 cursor:(unsigned long long)arg3;
- (void)handleBrailleKeypress:(NSArray *)arg1;
- (void)handleFailedToLoadBluetoothDevice:(NSString *)arg1;
- (void)configurationDidChange;
- (void)handleBrailleDriverDisconnected;
- (void)handleBrailleDriverDidLoad;
@end
