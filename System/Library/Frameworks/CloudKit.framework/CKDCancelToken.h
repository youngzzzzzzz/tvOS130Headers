/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDCancelling.h>

@interface CKDCancelToken : NSObject <CKDCancelling> {

	BOOL _isCancelled;
	/*^block*/id _cancelAction;

}

@property (nonatomic,copy) id cancelAction;              //@synthesize cancelAction=_cancelAction - In the implementation block
-(void)cancel;
-(BOOL)isCancelled;
-(id)cancelAction;
-(void)setCancelAction:(id)arg1 ;
@end

