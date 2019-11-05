/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PFHistoryAnalyzerOptions;

@interface PFHistoryAnalyzer : NSObject {

	PFHistoryAnalyzerOptions* _options;

}

@property (nonatomic,copy,readonly) PFHistoryAnalyzerOptions * options;              //@synthesize options=_options - In the implementation block
-(id)init;
-(void)dealloc;
-(PFHistoryAnalyzerOptions *)options;
-(id)initWithOptions:(id)arg1 ;
-(BOOL)processTransaction:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)instantiateNewAnalyzerContext;
-(id)newAnalyzerContextForStore:(id)arg1 sinceLastHistoryToken:(id)arg2 inManagedObjectContext:(id)arg3 error:(id*)arg4 ;
@end
