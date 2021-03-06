/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:43:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/Support/bookassetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class ISDialog, SSVDialogResponse;

@interface BLDaemonDialogOperation : ISOperation {

	ISDialog* _dialog;
	SSVDialogResponse* _dialogResponse;
	BOOL _displaysOnLockscreen;
	/*^block*/id _outputBlock;

}

@property (readonly) ISDialog * dialog; 
@property (assign) BOOL displaysOnLockscreen; 
@property (copy) id outputBlock; 
@property (copy,readonly) SSVDialogResponse * dialogResponse; 
-(void)run;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
-(ISDialog *)dialog;
-(BOOL)displaysOnLockscreen;
-(void)setDisplaysOnLockscreen:(BOOL)arg1 ;
-(id)initWithDialog:(id)arg1 ;
-(SSVDialogResponse *)dialogResponse;
@end

