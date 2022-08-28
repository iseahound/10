# Windows header files

* This is useful for calling native windows functions. 
* Use the search bar to search in this repository.
* Just type in your struct name followed by vtbl. 
* For example `IStreamVtbl` gets you the virtual function table for `IStream`. 
* Generally the first function is at offset `0` and is `QueryInterface`,
* Followed by `AddRef` and `Release` which are reference counting functions. 

## Define comments as:

    IWICBitmapSource::GetSize - https://github.com/iseahound/10/blob/win/10.0.16299.0/um/wincodec.h#L1304
