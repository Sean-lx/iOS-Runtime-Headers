/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface BackgroundStockUpdater : StockUpdater <NSURLSessionTaskDelegate> {
    NSDate * _earliestBeginDate;
    id /* block */  _finishEventsHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *earliestBeginDate;
@property (nonatomic, copy) id /* block */ finishEventsHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURLSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (id)_backgroundSession;
- (void)_createDefaultSession;
- (id)earliestBeginDate;
- (void)failWithError:(id)arg1;
- (id /* block */)finishEventsHandler;
- (void)reestablishBackgroundSessionForManager:(id)arg1 withFinishEventsHandler:(id /* block */)arg2;
- (id)session;
- (void)setEarliestBeginDate:(id)arg1;
- (void)setFinishEventsHandler:(id /* block */)arg1;
- (id)taskForRequest:(id)arg1 delegate:(id)arg2;

@end
