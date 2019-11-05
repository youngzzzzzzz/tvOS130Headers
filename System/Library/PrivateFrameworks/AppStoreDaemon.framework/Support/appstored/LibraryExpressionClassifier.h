/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LibraryQueryEvaluator;
@interface LibraryExpressionClassifier : NSObject {

	id<LibraryQueryEvaluator> _evaluator;

}
-(id)initWithEvalulator:(id)arg1 ;
-(id)_resultEnumeratorForComparisonPredicate:(id)arg1 error:(id*)arg2 ;
-(id)_resultEnumeratorForKeyPath:(id)arg1 matchingValues:(id)arg2 error:(id*)arg3 ;
-(id)resultEnumeratorForPredicate:(id)arg1 error:(id*)arg2 ;
@end
