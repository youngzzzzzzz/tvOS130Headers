/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/Task.h>

@class EvaluatorDownload;

@interface LowDataEvaluatorTask : Task {

	EvaluatorDownload* _cellularDownload;
	long long _evaluatorResult;

}

@property (retain) EvaluatorDownload * cellularDownload;              //@synthesize cellularDownload=_cellularDownload - In the implementation block
@property (readonly) long long evaluatorResult;                       //@synthesize evaluatorResult=_evaluatorResult - In the implementation block
-(void)main;
-(void)setCellularDownload:(EvaluatorDownload *)arg1 ;
-(long long)evaluatorResult;
-(EvaluatorDownload *)cellularDownload;
@end
