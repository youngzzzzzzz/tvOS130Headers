/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PKPrinter;

@interface UIPrintInfoRequest : NSObject {

	PKPrinter* _printer;
	int _requestState;
	/*^block*/id _completionHandler;

}

@property (assign,nonatomic) int requestState;                //@synthesize requestState=_requestState - In the implementation block
@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
+(id)requestInfoForPrinter:(id)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setRequestState:(int)arg1 ;
-(int)requestState;
-(void)requestPrintInfo;
@end

